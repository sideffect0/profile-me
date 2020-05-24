package main

import "github.com/gofiber/fiber"
import "domaintools/services"

func main() {
  app := fiber.New()

  app.Get("/:service/", func(c *fiber.Ctx) {
    c.Send("200 OK")
  })

  app.Post("/:service", func(c *fiber.Ctx) {
    r := c.FormValue("resource")
    res := services.ServiceResponse(c.Params("service"), r)
    c.Send(res)
  })

  app.Listen(3000)
}
