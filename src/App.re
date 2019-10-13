open ReactUtils;

[@react.component]
let make = () => {
  let (catData, setCatData) = React.useState(() => None);

  let catItems =
    switch (catData) {
    | Some(cats) =>
      Array.map(cat => <CatItem key={cat.id} cat />, cats)
      |> ReasonReact.array
    | None => React.string("Loading ...")
    };

  <div className="text-center">
    <h1> {"Cat Facts" |> s} </h1>
    <div> catItems </div>
  </div>;
};
