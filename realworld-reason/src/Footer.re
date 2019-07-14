[@react.component]
let make = () =>
  <footer>
    <div className="container">
      <a href="/" className="logo-font"> {ReasonReact.string("conduit")} </a>
      <span className="attribution">
        {ReasonReact.string("An interactive learning project from")}
        <a href="https://thinkster.io"> {ReasonReact.string("Thinkster")} </a>
        {ReasonReact.string(". Code")}
        {ReasonReact.string({js|\u0026|js})}
        {ReasonReact.string("design licensed under MIT.")}
      </span>
    </div>
  </footer>;