// Generated by BUCKLESCRIPT VERSION 5.0.6, PLEASE EDIT WITH CARE
'use strict';

var React = require("react");

function CatFactItem(Props) {
  var catFact = Props.catFact;
  return React.createElement("div", {
              className: "row"
            }, React.createElement("p", {
                  className: "col-1"
                }, String(catFact[/* upvotes */2]), " ⬆️ upvote(s)"), React.createElement("p", {
                  className: "col-11 left"
                }, catFact[/* text */1]));
}

var make = CatFactItem;

exports.make = make;
/* react Not a pure module */