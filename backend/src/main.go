package main

import "github.com/gofiber/fiber"

func main() {
  app := fiber.New()

  app.Get("/:service/", func(c *fiber.Ctx) {
    println(c.Params("service"))
    c.Send("200 OK")
  })

  app.Post("/:service", func(c *fiber.Ctx) {
    r := c.FormValue("resource")
    res := ServiceResponse(c.Params("service"))
    c.Send("200 OK")
  })

  app.Listen(3000)
}
