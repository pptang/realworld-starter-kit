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

            <a className="nav-link active" href="">
              {ReasonReact.string("Home")}
            </a>
          </li>
        <li className="nav-item">
          <a className="nav-link" href="">
            <i className="ion-compose" />
            {ReasonReact.string({js|\u0020|js})}
            {ReasonReact.string("New Post")}
          </a>
        </li>
        <li className="nav-item">
          <a className="nav-link" href="">
            <i className="ion-gear-a" />
            // XXX: Don't know the meaning of js| |js yet...
            {ReasonReact.string({js|\u0020|js})}
            {ReasonReact.string("Settings")}
          </a>
        </li>
        <li className="nav-item">
          <a className="nav-link" href="">
            {ReasonReact.string("Sign up")}
          </a>
        </li>
      </ul>
    </div>
  </div>;
};