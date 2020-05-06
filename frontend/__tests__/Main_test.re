open Jest;
open Expect;
open Main;

describe("Main", () => {
  test("Check for route change", () =>
    expect(component()) |> toEqual(<div></div>)    
  );
});
