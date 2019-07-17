let s = ReasonReact.string;

[@react.component]
let make = () =>
  <div className="profile-page">
    <div className="user-info">
      <div className="container">
        <div className="row">
          <div className="col-xs-12 col-md-10 offset-md-1">
            <img src="http://i.imgur.com/Qr71crq.jpg" className="user-img" />
            <h4> {s("Eric Simons")} </h4>
            <p>
              {s(
                 "Cofounder @GoThinkster, lived in Aol's HQ for a few months, kinda looks like Peeta from the Hunger Games",
               )}
            </p>
            <button className="btn btn-sm btn-outline-secondary action-btn">
              <i className="ion-plus-round" />
              {ReasonReact.string({js|\u0020|js})}
              {s("Follow Eric Simons ")}
            </button>
          </div>
        </div>
      </div>
    </div>
    <div className="container">
      <div className="row">
        <div className="col-xs-12 col-md-10 offset-md-1">
          <div className="articles-toggle">
            <ul className="nav nav-pills outline-active">
              <li className="nav-item">
                <a className="nav-link active" href="">
                  {s("My Articles")}
                </a>
              </li>
              <li className="nav-item">
                <a className="nav-link" href="">
                  {s("Favorited Articles")}
                </a>
              </li>
            </ul>
          </div>
          <div className="article-preview">
            <div className="article-meta">
              <a href=""> <img src="http://i.imgur.com/Qr71crq.jpg" /> </a>
              <div className="info">
                <a href="" className="author"> {s("Eric Simons")} </a>
                <span className="date"> {s("January 20th")} </span>
              </div>
              <button className="btn btn-outline-primary btn-sm pull-xs-right">
                <i className="ion-heart" />
                {s("29")}
              </button>
            </div>
            <a href="" className="preview-link">
              <h1> {s("How to build webapps that scale")} </h1>
              <p> {s("This is the description for the post.")} </p>
              <span> {s("Read more...")} </span>
            </a>
          </div>
          <div className="article-preview">
            <div className="article-meta">
              <a href=""> <img src="http://i.imgur.com/N4VcUeJ.jpg" /> </a>
              <div className="info">
                <a href="" className="author"> {s("Albert Pai")} </a>
                <span className="date"> {s("January 20th")} </span>
              </div>
              <button className="btn btn-outline-primary btn-sm pull-xs-right">
                <i className="ion-heart" />
                {s("32")}
              </button>
            </div>
            <a href="" className="preview-link">
              <h1>
                {s(
                   "The song you won't ever stop singing. No matter how hard you try.",
                 )}
              </h1>
              <p> {s("This is the description for the post.")} </p>
              <span> {s("Read more...")} </span>
              <ul className="tag-list">
                <li className="tag-default tag-pill tag-outline">
                  {s("Music")}
                </li>
                <li className="tag-default tag-pill tag-outline">
                  {s("Song")}
                </li>
              </ul>
            </a>
          </div>
        </div>
      </div>
    </div>
  </div>;