// Generated by BUCKLESCRIPT VERSION 5.0.6, PLEASE EDIT WITH CARE
'use strict';

var React = require("react");
var ReasonReactRouter = require("reason-react/src/ReasonReactRouter.js");
var Home$ReactHooksTemplate = require("./Home.bs.js");
var Login$ReactHooksTemplate = require("./Login.bs.js");
var Footer$ReactHooksTemplate = require("./Footer.bs.js");
var Header$ReactHooksTemplate = require("./Header.bs.js");
var Article$ReactHooksTemplate = require("./Article.bs.js");
var Profile$ReactHooksTemplate = require("./Profile.bs.js");
var Settings$ReactHooksTemplate = require("./Settings.bs.js");
var EditArticle$ReactHooksTemplate = require("./EditArticle.bs.js");

function App(Props) {
  var url = ReasonReactRouter.useUrl(undefined, /* () */0);
  console.log(url[/* hash */1]);
  console.log(url[/* hash */1].split("/"));
  var match = url[/* hash */1].split("/");
  var tmp;
  var exit = 0;
  if (match.length !== 2) {
    exit = 1;
  } else {
    var match$1 = match[0];
    if (match$1 === "") {
      var match$2 = match[1];
      switch (match$2) {
        case "article" : 
            tmp = React.createElement(Article$ReactHooksTemplate.make, { });
            break;
        case "editor" : 
            tmp = React.createElement(EditArticle$ReactHooksTemplate.make, { });
            break;
        case "profile" : 
            tmp = React.createElement(Profile$ReactHooksTemplate.make, { });
            break;
        case "login" : 
        case "register" : 
            tmp = React.createElement(Login$ReactHooksTemplate.make, { });
            break;
        case "settings" : 
            tmp = React.createElement(Settings$ReactHooksTemplate.make, { });
            break;
        default:
          exit = 1;
      }
    } else {
      exit = 1;
    }
  }
  if (exit === 1) {
    tmp = React.createElement(Home$ReactHooksTemplate.make, { });
  }
  return React.createElement(React.Fragment, undefined, React.createElement(Header$ReactHooksTemplate.make, { }), tmp, React.createElement(Footer$ReactHooksTemplate.make, { }));
}

var make = App;

exports.make = make;
/* react Not a pure module */
