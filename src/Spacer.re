[@react.component]
let make = (~height: option(int)=?, ~width: option(int)=?) => {
  let w =
    switch (width) {
    | None => "0px"
    | Some(w) => w->string_of_int ++ "px"
    };

  let h =
    switch (height) {
    | None => "0px"
    | Some(h) => h->string_of_int ++ "px"
    };

  <div style={ReactDOMRe.Style.make(~width=w, ~height=h, ())} />;
};