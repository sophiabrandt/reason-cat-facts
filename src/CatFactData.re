type catFact = {
  id: string,
  text: string,
  upvotes: int,
};

let parseCatFactJson = json =>
  Json.Decode.{
    id: field("_id", string, json),
    text: field("text", string, json),
    upvotes: field("upvotes", int, json),
  };

let parseCatFactsResponseJson = json =>
  Json.Decode.(field("all", array(parseCatFactJson), json));

let catFactsUrl = "https://cors-anywhere.herokuapp.com/https://cat-fact.herokuapp.com/facts";

let fetchCatFacts = () =>
  Js.Promise.(
    Bs_fetch.fetch(catFactsUrl)
    |> then_(Bs_fetch.Response.text)
    |> then_(jsonText =>
         resolve(parseCatFactsResponseJson(Js.Json.parseExn(jsonText)))
       )
  );
