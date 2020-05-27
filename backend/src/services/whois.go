package services

import (
	"github.com/likexian/whois-go"
)

func GetDetails(domain_or_ip string) string {
	result, _ := whois.Whois(domain_or_ip)
	return result
}
