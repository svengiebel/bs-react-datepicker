[@bs.module "react-datepicker"]
external datePicker : ReasonReact.reactClass = "default";

[@bs.module] external moment : 'a = "moment";

let moment = moment;

[@bs.obj]
external makeProps :
  (
    ~selected: Js.Nullable.t('a)=?,
    ~onChange: 'b => unit=?,
    ~onBlur: ReactEventRe.Focus.t => unit=?,
    ~customInput: ReasonReact.reactElement=?,
    ~inline: bool=?,
    ~withPortal: bool=?,
    unit
  ) =>
  _ =
  "";

let make =
    (
      ~selected=?,
      ~onChange=?,
      ~onBlur=?,
      ~customInput=?,
      ~inline=?,
      ~withPortal=?,
      children,
    ) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=datePicker,
    ~props=
      makeProps(
        ~selected?,
        ~onChange?,
        ~onBlur?,
        ~customInput?,
        ~inline?,
        ~withPortal?,
        (),
      ),
    children,
  );
