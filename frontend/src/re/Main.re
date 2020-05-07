
open Tea.App;
open Tea.Html;


let init = () => "batman";

[@bs.deriving {accessors: accessors}]
type msg =
  | China
  | Corona
  | Lockdown;

let update = model =>
  fun
  | China => "china"
  | Corona => "corona"
  | Lockdown => "lockdown";

let view = model =>
  div(
    [],
    [
        text(model),
    ],
  );


let main = beginnerProgram({model: init(), update, view});
