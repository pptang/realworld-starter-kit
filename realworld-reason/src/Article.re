let s = ReasonReact.string;

[@react.component]
// TODO: use slug to fetch api
let make = (~slug=?) =>
  <div className="article-page">
    <div className="banner">
      <div className="container">
        <h1> {s("How to build webapps that scale")} </h1>
        <div className="article-meta">
          <a href=""> <img src="http://i.imgur.com/Qr71crq.jpg" /> </a>
          <div className="info">
            <a href="" className="author"> {s("Eric Simons")} </a>
            <span className="date"> {s("January 20th")} </span>
          </div>
          <button className="btn btn-sm btn-outline-secondary">
            <i className="ion-plus-round" />
            {s({js|\u0020|js})}
            {s("Follow Eric Simons")}
            <span className="counter"> {s("(10)")} </span>
          </button>
          {s({js|\u0020|js})}
          {s({js|\u0020|js})}
          <button className="btn btn-sm btn-outline-primary">
            <i className="ion-heart" />
            {s({js|\u0020|js})}
            {s("Favorite Post")}
            <span className="counter"> {s("(29)")} </span>
          </button>
        </div>
      </div>
    </div>
    <div className="container page">
      <div className="row article-content">
        <div className="col-md-12">
          <p>
            {s(
               "Web development technologies have evolved at an incredible clip over the past few years.",
             )}
          </p>
          <h2 id="introducing-ionic"> {s("Introducing RealWorld.")} </h2>
          <p>
            {s(
               "It's a great solution for learning how other frameworks work.",
             )}
          </p>
        </div>
      </div>
      <hr />
      <div className="article-actions">
        <div className="article-meta">
          <a href="profile.html">
            <img src="http://i.imgur.com/Qr71crq.jpg" />
          </a>
          <div className="info">
            <a href="" className="author"> {s("Eric Simons")} </a>
            <span className="date"> {s("January 20th")} </span>
          </div>
          <button className="btn btn-sm btn-outline-secondary">
            <i className="ion-plus-round" />
            {s({js|\u0020|js})}
            {s("Follow Eric Simons")}
            <span className="counter"> {s("(10)")} </span>
          </button>
          {s({js|\u0020|js})}
          <button className="btn btn-sm btn-outline-primary">
            <i className="ion-heart" />
            {s({js|\u0020|js})}
            {s("Favorite Post")}
            <span className="counter"> {s("(29)")} </span>
          </button>
        </div>
      </div>
      <div className="row">
        <div className="col-xs-12 col-md-8 offset-md-2">
          <form className="card comment-form">
            <div className="card-block">
              <textarea
                className="form-control"
                placeholder="Write a comment..."
                rows=3
              />
            </div>
            <div className="card-footer">
              <img
                src="http://i.imgur.com/Qr71crq.jpg"
                className="comment-author-img"
              />
              <button className="btn btn-sm btn-primary">
                {s("Post Comment")}
              </button>
            </div>
          </form>
          <div className="card">
            <div className="card-block">
              <p className="card-text">
                {s(
                   "With supporting text below as a natural lead-in to additional content.",
                 )}
              </p>
            </div>
            <div className="card-footer">
              <a href="" className="comment-author">
                <img
                  src="http://i.imgur.com/Qr71crq.jpg"
                  className="comment-author-img"
                />
              </a>
              {s({js|\u0020|js})}
              <a href="" className="comment-author"> {s("Jacob Schmidt")} </a>
              <span className="date-posted"> {s("Dec 29th")} </span>
            </div>
          </div>
          <div className="card">
            <div className="card-block">
              <p className="card-text">
                {s(
                   "With supporting text below as a natural lead-in to additional content.",
                 )}
              </p>
            </div>
            <div className="card-footer">
              <a href="" className="comment-author">
                <img
                  src="http://i.imgur.com/Qr71crq.jpg"
                  className="comment-author-img"
                />
              </a>
              {s({js|\u0020|js})}
              <a href="" className="comment-author"> {s("Jacob Schmidt")} </a>
              <span className="date-posted"> {s("Dec 29th")} </span>
              <span className="mod-options">
                <i className="ion-edit" />
                <i className="ion-trash-a" />
              </span>
            </div>
          </div>
        </div>
      </div>
    </div>
  </div>;