
open Tea.App;
open Tea.Html;

open Ui;

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

let view_button = (title, msg) => button([onClick(msg), ], [text(title)]);

let dns_resources = () => {
        [
         ["C", "{resource.type}", "{resource.value}"],
         ["A", "{resource.type}", "{resource.value}"],
         ["N", "{resource.type}", "{resource.value}"],
         ["T", "{resource.type}", "{resource.value}"],
         ["M", "{resource.type}", "{resource.value}"],
        ] |> List.map((el) => dns_record_field(List.nth(el, 0), List.nth(el, 1), List.nth(el, 2)));
};

let view = model =>
  div(
    [class'("py-3 text-sm"), ],
    dns_resources(),
  );


let main = beginnerProgram({model: init(), update, view});
