open Tea.Html;

let dns_record_field = (record_short, record_type, record_value) => div(
    [ class'("record-field"), ],
    [ span(
       [class'("record-type-sym"), ],
       [text(record_short), ]
      ), div(
       [class'("record-type-value"), ],
       [text(record_type), ]
      ), div(
       [class'("record-type-name"), ],
       [text(record_value), ]
      )],
);



