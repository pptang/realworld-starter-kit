// Generated by BUCKLESCRIPT VERSION 5.0.6, PLEASE EDIT WITH CARE
'use strict';

var React = require("react");
var ReasonReactRouter = require("reason-react/src/ReasonReactRouter.js");
var Login$ReactHooksTemplate = require("./Login.bs.js");
var Footer$ReactHooksTemplate = require("./Footer.bs.js");
var Header$ReactHooksTemplate = require("./Header.bs.js");
var Article$ReactHooksTemplate = require("./Article.bs.js");
var Profile$ReactHooksTemplate = require("./Profile.bs.js");
var Settings$ReactHooksTemplate = require("./Settings.bs.js");

function App(Props) {
  var url = ReasonReactRouter.useUrl(undefined, /* () */0);
  var match = url[/* hash */1];
  var tmp;
  switch (match) {
    case "/article" : 
        tmp = React.createElement(Article$ReactHooksTemplate.make, { });
        break;
    case "/login" : 
        tmp = React.createElement(Login$ReactHooksTemplate.make, { });
        break;
    case "/profile" : 
        tmp = React.createElement(Profile$ReactHooksTemplate.make, { });
        break;
    case "/settings" : 
        tmp = React.createElement(Settings$ReactHooksTemplate.make, { });
        break;
    default:
      tmp = React.createElement(Login$ReactHooksTemplate.make, { });
  }
  return React.createElement(React.Fragment, undefined, React.createElement(Header$ReactHooksTemplate.make, { }), tmp, React.createElement(Footer$ReactHooksTemplate.make, { }));
}

var make = App;

exports.make = make;
/* react Not a pure module */
