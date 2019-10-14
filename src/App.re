open ReactUtils;

module Spinner = {
  [@react.component]
  let make = () =>
    <div className="spinner">
      <div className="double-bounce1" />
      <div className="double-bounce2" />
    </div>;
};

[@react.component]
let make = () => {
  let (catFactData, setCatFactData) = React.useState(() => None);

  React.useEffect0(() => {
    CatFactData.fetchCatFacts()
    |> Js.Promise.then_(catFactData => {
         setCatFactData(_prev => Some(catFactData));
         Js.Promise.resolve();
       })
    |> Js.Promise.catch(err => {
         Js.log("An error occurred: " ++ Js.String.make(err));
         Js.Promise.resolve();
       })
    |> ignore;
    None;
  });

  let catFactItems =
    switch (catFactData) {
    | Some(catFacts) =>
      Array.map(
        (catFact: CatFactData.catFact) =>
          <CatFactItem key={catFact.id} catFact />,
        catFacts,
      )
      |> ReasonReact.array
    | None => <Spinner />
    };

  <>
    <h1 className="text-center"> {{js|Cat Facts 😸|js} |> s} </h1>
    <div className="center">
      <div style={ReactDOMRe.Style.make(~maxWidth="800px", ())}>
        catFactItems
      </div>
    </div>
  </>;
};
