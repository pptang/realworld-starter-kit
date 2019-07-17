let s = ReasonReact.string;
[@react.component]
let make = () =>
  <div className="auth-page">
    <div className="container page">
      <div className="row">
        <div className="col-md-6 offset-md-3 col-xs-12">
          <h1 className="text-xs-center"> {s("Sign up")} </h1>
          <p className="text-xs-center">
            <a href=""> {s("Have an account?")} </a>
          </p>
          <ul className="error-messages">
            <li> {s("That email is already taken")} </li>
          </ul>
          <form>
            <fieldset className="form-group">
              <input
                className="form-control form-control-lg"
                type_="text"
                placeholder="Your Name"
              />
            </fieldset>
            <fieldset className="form-group">
              <input
                className="form-control form-control-lg"
                type_="text"
                placeholder="Email"
              />
            </fieldset>
            <fieldset className="form-group">
              <input
                className="form-control form-control-lg"
                type_="password"
                placeholder="Password"
              />
            </fieldset>
            <button className="btn btn-lg btn-primary pull-xs-right">
              {s("Sign up")}
            </button>
          </form>
        </div>
      </div>
    </div>
  </div>;