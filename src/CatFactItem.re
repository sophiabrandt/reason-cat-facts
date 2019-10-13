open ReactUtils;

[@react.component]
let make = (~catFact: CatFactData.catFact) =>
  <div className="row">
    <p className="col-1">
      {catFact.upvotes |> string_of_int |> s}
      {{js| ⬆️ upvote(s)|js} |> s}
    </p>
    <p className="col-11 left"> {catFact.text |> s} </p>
  </div>;
