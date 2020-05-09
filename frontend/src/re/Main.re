
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

let view_button = (title, msg) => button([onClick(msg)], [text(title)]);

let view = model =>
  div(
    [],
    [
        text(model),
        view_button("china", China), 
        view_button("corona", Corona),
        view_button("lockdown", Lockdown),
    ],
  );


let main = beginnerProgram({model: init(), update, view});
