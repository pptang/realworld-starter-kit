let s = ReasonReact.string;

type state = {articleList: option(ArticleData.articleList)};

type action =
  | Loaded(ArticleData.articleList);

[@react.component]
let make = () => {
  let (state, dispatch) = React.useReducer((_state, action) =>
  switch (action) {
  | Loaded(data) => {articleList: Some(data)}
  }, {articleList: None});

  React.useEffect(() => {
      ArticleData.fetchArticles(data => dispatch(Loaded(data)))
      |>ignore;
    None;
    });

  let renderArticle = (article: ArticleData.article) =>
    <div key={article.slug} className="article-preview">
      <div className="article-meta">
        <a href="profile.html">
          <img src={article.author.image} />
        </a>
        <div className="info">
          <a href="" className="author"> {s(article.author.username)} </a>
          <span className="date"> {s(article.updatedAt)} </span>
        </div>
        <button className="btn btn-outline-primary btn-sm pull-xs-right">
          <i className="ion-heart" />
          {s(string_of_int(article.favoritesCount))}
        </button>
      </div>
      <a href="" className="preview-link">
        <h1> {s(article.title)} </h1>
        <p> {s(article.description)} </p>
        <span> {s("Read more...")} </span>
      </a>
    </div>;
  let renderArticleList = (articleList: option(ArticleData.articleList)) =>
    switch (articleList) {
    | Some(articles) =>
      <div>{React.array(Belt.Array.map(articles, article => renderArticle(article)))}</div>;
    | None => ReasonReact.null
    };

  <div className="home-page">
    <div className="banner">
      <div className="container">
        <h1 className="logo-font"> {s("conduit")} </h1>
        <p> {s("A place to share your knowledge.")} </p>
      </div>
    </div>
    <div className="container page">
      <div className="row">
        <div className="col-md-9">
          <div className="feed-toggle">
            <ul className="nav nav-pills outline-active">
              <li className="nav-item">
                <a className="nav-link disabled" href="">
                  {s("Your Feed")}
                </a>
              </li>
              <li className="nav-item">
                <a className="nav-link active" href="">
                  {s("Global Feed")}
                </a>
              </li>
            </ul>
          </div>
          {renderArticleList(state.articleList)}
        </div>
        <div className="col-md-3">
          <div className="sidebar">
            <p> {s("Popular Tags")} </p>
            <div className="tag-list">
              <a href="" className="tag-pill tag-default">
                {s("programming")}
              </a>
              <a href="" className="tag-pill tag-default">
                {s("javascript")}
              </a>
              <a href="" className="tag-pill tag-default"> {s("emberjs")} </a>
              <a href="" className="tag-pill tag-default">
                {s("angularjs")}
              </a>
              <a href="" className="tag-pill tag-default"> {s("react")} </a>
              <a href="" className="tag-pill tag-default"> {s("mean")} </a>
              <a href="" className="tag-pill tag-default"> {s("node")} </a>
              <a href="" className="tag-pill tag-default"> {s("rails")} </a>
            </div>
          </div>
        </div>
      </div>
    </div>
  </div>;
};