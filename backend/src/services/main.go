package services

func ServiceResponse(service string, resource string) string {
	switch service {
	case "whois":
		return FetchWhoisRecords(resource)
	case "dns":
	case "mx":
		println("made up")
	}
	return "dummy"
}
