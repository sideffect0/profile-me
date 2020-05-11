package main

import "github.com/gofiber/fiber"

func main() {
  app := fiber.New()

  app.Get("/:service", func(c *fiber.Ctx) {
    println(c.Params("value"))
    c.Send("200 OK")
  })

  app.Listen(3000)
}
