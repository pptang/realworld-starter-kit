let apiBaseUrl = "https://conduit.productionready.io/api";

// j| |j supports Unicode and interpolation variables
let articleUrl = {j|$apiBaseUrl/articles|j};

type author = {
  username: string,
  bio: option(string),
  image: string,
  following: bool,
};

type article = {
  slug: string,
  title: string,
  description: string,
  body: string,
  tagList: array(string),
  createdAt: string,
  updatedAt: string,
  favorited: bool,
  favoritesCount: int,
  author,
};

type articleList = array(article);

type articlesResponse = {
  articles: articleList,
  articlesCount: int,
};

module Decode = {
  let author = json =>
    Json.Decode.{
      username: json |> field("username", string),
      bio: json |> optional(field("bio", string)),
      image: json |> field("image", string),
      following: json |> field("following", bool),
    };
  let article = json =>
    Json.Decode.{
      slug: json |> field("slug", string),
      title: json |> field("title", string),
      description: json |> field("description", string),
      body: json |> field("body", string),
      tagList: json |> field("tagList", array(string)),
      createdAt: json |> field("createdAt", string),
      updatedAt: json |> field("updatedAt", string),
      favorited: json |> field("favorited", bool),
      favoritesCount: json |> field("favoritesCount", int),
      author: json |> field("author", author),
    };
  let articleList = json => Json.Decode.(json |> array(article));
  let articlesResponse = json =>
    Json.Decode.{
      articles: json |> field("articles", articleList),
      articlesCount: json |> field("articlesCount", int)
    };
};

let fetchArticles = callback =>
  Js.Promise.(
    Fetch.fetch(articleUrl)
    |> then_(Fetch.Response.json)
    |> then_(json =>
         json
         |> Decode.articlesResponse
         |> (
          articlesResponse => {
             callback(articlesResponse.articles);
             resolve();
           }
         )
       )
  );