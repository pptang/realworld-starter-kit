[@react.component]
let make = () => {
  let url = ReasonReactRouter.useUrl();
  <>
    <Header />
    {switch (url.hash) {
     | "/login" => <Login />
     | "/settings" => <Settings />
     | "/article" => <Article />
     | "/profile" => <Profile />
     | _ => <Login />
     }}
    <Footer />
  </>;
};