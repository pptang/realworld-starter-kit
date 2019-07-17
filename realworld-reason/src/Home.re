let s = ReasonReact.string;

[@react.component]
let make = () =>
  <div className="home-page">

  <div className="banner">
    <div className="container">
      <h1 className="logo-font">{s("conduit")}</h1>
      <p>{s("A place to share your knowledge.")}</p>
    </div>
  </div>

  <div className="container page">
    <div className="row">

      <div className="col-md-9">
        <div className="feed-toggle">
          <ul className="nav nav-pills outline-active">
            <li className="nav-item">
              <a className="nav-link disabled" href="">{s("Your Feed")}</a>
            </li>
            <li className="nav-item">
              <a className="nav-link active" href="">{s("Global Feed")}</a>
            </li>
          </ul>
        </div>

        <div className="article-preview">
          <div className="article-meta">
            <a href="profile.html"><img src="http://i.imgur.com/Qr71crq.jpg" /></a>
            <div className="info">
              <a href="" className="author">{s("Eric Simons")}</a>
              <span className="date">{s("January 20th")}</span>
            </div>
            <button className="btn btn-outline-primary btn-sm pull-xs-right">
              <i className="ion-heart"></i> {s("29")}
            </button>
          </div>
          <a href="" className="preview-link">
            <h1>{s("How to build webapps that scale")}</h1>
            <p>{s("This is the description for the post.")}</p>
            <span>{s("Read more...")}</span>
          </a>
        </div>

        <div className="article-preview">
          <div className="article-meta">
            <a href="profile.html"><img src="http://i.imgur.com/N4VcUeJ.jpg" /></a>
            <div className="info">
              <a href="" className="author">{s("Albert Pai")}</a>
              <span className="date">{s("January 20th")}</span>
            </div>
            <button className="btn btn-outline-primary btn-sm pull-xs-right">
              <i className="ion-heart"></i> {s("32")}
            </button>
          </div>
          <a href="" className="preview-link">
            <h1>{s("The song you won't ever stop singing. No matter how hard you try.")}</h1>
            <p>{s("This is the description for the post.")}</p>
            <span>{s("Read more...")}</span>
          </a>
        </div>

      </div>

      <div className="col-md-3">
        <div className="sidebar">
          <p>{s("Popular Tags")}</p>

          <div className="tag-list">
            <a href="" className="tag-pill tag-default">{s("programming")}</a>
            <a href="" className="tag-pill tag-default">{s("javascript")}</a>
            <a href="" className="tag-pill tag-default">{s("emberjs")}</a>
            <a href="" className="tag-pill tag-default">{s("angularjs")}</a>
            <a href="" className="tag-pill tag-default">{s("react")}</a>
            <a href="" className="tag-pill tag-default">{s("mean")}</a>
            <a href="" className="tag-pill tag-default">{s("node")}</a>
            <a href="" className="tag-pill tag-default">{s("rails")}</a>
          </div>
        </div>
      </div>

    </div>
  </div>

</div>;