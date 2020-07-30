// Generated by BUCKLESCRIPT, PLEASE EDIT WITH CARE
'use strict';

var $$Array = require("bs-platform/lib/js/array.js");
var Curry = require("bs-platform/lib/js/curry.js");
var React = require("react");
var CatFactData$ReactHooksTemplate = require("./CatFactData.bs.js");
var CatFactItem$ReactHooksTemplate = require("./CatFactItem.bs.js");

function App$Spinner(Props) {
  return React.createElement("div", {
              className: "spinner"
            }, React.createElement("div", {
                  className: "double-bounce1"
                }), React.createElement("div", {
                  className: "double-bounce2"
                }));
}

var Spinner = {
  make: App$Spinner
};

function App(Props) {
  var match = React.useState(function () {
        
      });
  var setCatFactData = match[1];
  var catFactData = match[0];
  React.useEffect((function () {
          CatFactData$ReactHooksTemplate.fetchCatFacts(undefined).then(function (catFactData) {
                  Curry._1(setCatFactData, (function (_prev) {
                          return catFactData;
                        }));
                  return Promise.resolve(undefined);
                }).catch(function (err) {
                console.log("An error occurred: " + String(err));
                return Promise.resolve(undefined);
              });
          
        }), []);
  var catFactItems = catFactData !== undefined ? $$Array.map((function (catFact) {
            return React.createElement(CatFactItem$ReactHooksTemplate.make, {
                        catFact: catFact,
                        key: catFact.id
                      });
          }), catFactData) : React.createElement(App$Spinner, {});
  return React.createElement(React.Fragment, undefined, React.createElement("h1", {
                  className: "text-center"
                }, "Cat Facts 😸"), React.createElement("div", {
                  className: "center"
                }, React.createElement("div", {
                      style: {
                        maxWidth: "800px"
                      }
                    }, catFactItems)));
}

var make = App;

exports.Spinner = Spinner;
exports.make = make;
/* react Not a pure module */
