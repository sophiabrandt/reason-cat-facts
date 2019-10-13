open ReactUtils;

[@react.component]
let make = (~cat: CatData.cat) =>
  <div>
    <h2> {cat.text |> ReasonReact.string} </h2>
    {cat.upvotes |> string_of_int |> s}
    {" upvotes" |> s}
  </div>;
