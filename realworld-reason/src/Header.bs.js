// Generated by BUCKLESCRIPT VERSION 5.0.6, PLEASE EDIT WITH CARE
'use strict';

var React = require("react");

function Header(Props) {
  return React.createElement("div", {
              className: "navbar navbar-light"
            }, React.createElement("div", {
                  className: "container"
                }, React.createElement("a", {
                      className: "navbar-brand",
                      href: "index.html"
                    }, "conduit"), React.createElement("ul", {
                      className: "nav navbar-nav pull-xs-right"
                    }, React.createElement("li", {
                          className: "nav-item"
                        }, React.createElement("a", {
                              className: "nav-link active",
                              href: "/#/"
                            }, "Home")), React.createElement("li", {
                          className: "nav-item"
                        }, React.createElement("a", {
                              className: "nav-link",
                              href: "/#/editor"
                            }, React.createElement("i", {
                                  className: "ion-compose"
                                }), "\u0020", "New Post")), React.createElement("li", {
                          className: "nav-item"
                        }, React.createElement("a", {
                              className: "nav-link",
                              href: "/#/settings"
                            }, React.createElement("i", {
                                  className: "ion-gear-a"
                                }), "\u0020", "Settings")), React.createElement("li", {
                          className: "nav-item"
                        }, React.createElement("a", {
                              className: "nav-link",
                              href: "/#/register"
                            }, "Sign up")))));
}

var make = Header;

exports.make = make;
/* react Not a pure module */
