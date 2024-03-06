#pragma once

#include <HTTPClient.h>

String get_full_url(String url_part);

void configure_http_client(HTTPClient &client, String url, bool stream = true, int timeout = 1000);

#define SETUP_HTTP_CLIENT(url_part) HTTPClient client; configure_http_client(client, get_full_url(url_part));

#define SETUP_HTTP_CLIENT_FULL(url_part, stream, timeout) HTTPClient client; configure_http_client(client, get_full_url(url_part), stream, timeout);