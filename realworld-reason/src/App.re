[@react.component]
let make = () => {
  let url = ReasonReactRouter.useUrl();
  Js.log(url.hash)
  Js.log(Js.String.split("/", url.hash));
  <>
    <Header />
    {switch (Js.String.split("/", url.hash)) {
     | [|"", "register"|] => <Login />
     | [|"", "login"|] => <Login />
     | [|"", "editor"|] => <EditArticle />
     | [|"", "settings"|] => <Settings />
     | [|"", "article"|] => <Article />
     | [|"", "article", article_slug|] => <Article slug={article_slug}/>
     | [|"", "profile"|] => <Profile />
     | _ => <Home />
     }}
    <Footer />
  </>;
};