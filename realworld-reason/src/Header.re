[@react.component]
let make = () => {
  <div className="navbar navbar-light">
    <div className="container">
      <a className="navbar-brand" href="index.html">
        {ReasonReact.string("conduit")}
      </a>
      <ul className="nav navbar-nav pull-xs-right">
        <li className="nav-item">
          // Add "active" class when you're on that page"

            <a className="nav-link active" href="/#/">
              {ReasonReact.string("Home")}
            </a>
          </li>
        <li className="nav-item">
          <a className="nav-link" href="/#/editor">
            <i className="ion-compose" />
            // js| |js is syntax for supporting Unicode characters
            // https://bucklescript.github.io/docs/en/interop-cheatsheet#string-unicode-interpolation
            {ReasonReact.string({js|\u0020|js})}
            {ReasonReact.string("New Post")}
          </a>
        </li>
        <li className="nav-item">
          <a className="nav-link" href="/#/settings">
            <i className="ion-gear-a" />
            {ReasonReact.string({js|\u0020|js})}
            {ReasonReact.string("Settings")}
          </a>
        </li>
        <li className="nav-item">
          <a className="nav-link" href="/#/register">
            {ReasonReact.string("Sign up")}
          </a>
        </li>
      </ul>
    </div>
  </div>;
};