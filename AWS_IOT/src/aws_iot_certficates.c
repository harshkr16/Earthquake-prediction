/*
 * Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * Additions Copyright 2016 Espressif Systems (Shanghai) PTE LTD
 *
 * Licensed under the Apache License, Version 2.0 (the "License").
 * You may not use this file except in compliance with the License.
 * A copy of the License is located at
 *
 *  http://aws.amazon.com/apache2.0
 *
 * or in the "license" file accompanying this file. This file is distributed
 * on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
 * express or implied. See the License for the specific language governing
 * permissions and limitations under the License.
 */

/**
 * @file aws_iot_certifcates.c
 * @brief File to store the AWS certificates in the form of arrays
 */

#ifdef __cplusplus
extern "C" {
#endif

const char aws_root_ca_pem[] = {"-----BEGIN CERTIFICATE-----\n\
MIIDQTCCAimgAwIBAgITBmyfz5m/jAo54vB4ikPmljZbyjANBgkqhkiG9w0BAQsF\n\
ADA5MQswCQYDVQQGEwJVUzEPMA0GA1UEChMGQW1hem9uMRkwFwYDVQQDExBBbWF6\n\
b24gUm9vdCBDQSAxMB4XDTE1MDUyNjAwMDAwMFoXDTM4MDExNzAwMDAwMFowOTEL\n\
MAkGA1UEBhMCVVMxDzANBgNVBAoTBkFtYXpvbjEZMBcGA1UEAxMQQW1hem9uIFJv\n\
b3QgQ0EgMTCCASIwDQYJKoZIhvcNAQEBBQADggEPADCCAQoCggEBALJ4gHHKeNXj\n\
ca9HgFB0fW7Y14h29Jlo91ghYPl0hAEvrAIthtOgQ3pOsqTQNroBvo3bSMgHFzZM\n\
O6II8c+6zf1tRn4SWiw3te5djgdYZ6k/oI2peVKVuRF4fn9tBb6dNqcmzU5L/qw\n\
IFAGbHrQgLKm+a/sRxmPUDgH3KKHOVj4utWp+UhnMJbulHheb4mjUcAwhmahRWa6\n\
VOujw5H5SNz/0egwLX0tdHA114gk957EWW67c4cX8jJGKLhD+rcdqsq08p8kDi1L\n\
93FcXmn/6pUCyziKrlA4b9v7LWIbxcceVOF34GfID5yHI9Y/QCB/IIDEgEw+OyQm\n\
jgSubJrIqg0CAwEAAaNCMEAwDwYDVR0TAQH/BAUwAwEB/zAOBgNVHQ8BAf8EBAMC\n\
AYYwHQYDVR0OBBYEFIQYzIU07LwMlJQuCFmcx7IQTgoIMA0GCSqGSIb3DQEBCwUA\n\
A4IBAQCY8jdaQZChGsV2USggNiMOruYou6r4lK5IpDB/G/wkjUu0yKGX9rbxenDI\n\
U5PMCCjjmCXPI6T53iHTfIUJrU6adTrCC2qJeHZERxhlbI1Bjjt/msv0tadQ1wUs\n\
N+gDS63pYaACbvXy8MWy7Vu33PqUXHeeE6V/Uq2V8viTO96LXFvKWlJbYK8U90vv\n\
o/ufQJVtMVT8QtPHRh8jrdkPSHCa2XV4cdFyQzR1bldZwgJcJmApzyMZFo6IQ6XU\n\
5MsI+yMRQ+hDKXJioaldXgjUkK642M4UwtBV8ob2xJNDd2ZhwLnoQdeXeGADbkpy\n\
rqXRfboQnoZsG4q5WTP468SQvvG5\n\
-----END CERTIFICATE-----\n"};

const char certificate_pem_crt[] = {"-----BEGIN CERTIFICATE-----\n\
MIIDWTCCAkGgAwIBAgIUZl7pGtLdEFidYdgDdVm8tLwKKl8wDQYJKoZIhvcNAQEL\n\
BQAwTTFLMEkGA1UECwxCQW1hem9uIFdlYiBTZXJ2aWNlcyBPPUFtYXpvbi5jb20g\n\
SW5jLiBMPVNlYXR0bGUgU1Q9V2FzaGluZ3RvbiBDPVVTMB4XDTIwMDQxNjA5NDQy\n\
MFoXDTQ5MTIzMTIzNTk1OVowHjEcMBoGA1UEAwwTQVdTIElvVCBDZXJ0aWZpY2F0\n\
ZTCCASIwDQYJKoZIhvcNAQEBBQADggEPADCCAQoCggEBAMw8HsUqco/zlZhr7Sh8\n\
ZuAlieEki6C64McBm+opbxZxiCmBPCRjpWvmGBue+4kQ19SqpB7QOIYPxsCQeU9d\n\
WJLQtugvSt2uGZHx+O5CGGYkm3MsAdmxbqB2M0D5Or1GcmeHg/bUyJ3b5RQvqKlT\n\
5IImkNgyJJlKfbFRz6RncvKJHN5rnknGMJmE9XOm3iZZ0jJG9ReRZm+lZgw7BP32\n\
+X0gmk6w0OsQ1+vbTQks0k2m9jnu1KqQ+dNWbump9TCDBTgh3DlGcX1jSjNNCQtn\n\
KJ4/dWm3kZmcyUMLoZRLDtZX74T5HXkTNjqNPQEJkg485THmAE8pfeUbKlywjidl\n\
JZsCAwEAAaNgMF4wHwYDVR0jBBgwFoAUis6A50euY+1z6ZIqqUlUvFGiQTYwHQYD\n\
VR0OBBYEFCvKdl4/A+DRF3YtQGzemTFCw6SmMAwGA1UdEwEB/wQCMAAwDgYDVR0P\n\
AQH/BAQDAgeAMA0GCSqGSIb3DQEBCwUAA4IBAQAfo8zksNM87zTHiLp240elC5Qp\n\
sswLdxkruHHTdHYI0ZkQeX4Kpbixisd0cpV+JS1jVOVKS/PiABx43q9Ok0yyyp/B\n\
W/eyp3qbf7h6vTljwbJH9+mdxJJ9sC/SNoInl7nkkob4HCV8p6kQLQC+D/PChEzy\n\
ZT0RABg4A16/RYWrW4txhKoTPN71wYAGv33eG86EIMB2tjeKbsclW09ARaQYv+1Z\n\
1/kKd2Z2RHItu7sDiWCLzO/wyEmd8ftztDJU00loMTGV1XWU+jG7jQE9cGS/HvGT\n\
L+nD59JofLTUa8qD11bS+vNk9/rW887Pt4KHilDu2oBGOKvWVnv99e5F2rq8\n\
-----END CERTIFICATE-----\n"};

const char private_pem_key[] = {"-----BEGIN RSA PRIVATE KEY-----\n\
MIIEpQIBAAKCAQEAzDwexSpyj/OVmGvtKHxm4CWJ4SSLoLrgxwGb6ilvFnGIKYE8\n\
JGOla+YYG577iRDX1KqkHtA4hg/GwJB5T11YktC26C9K3a4ZkfH47kIYZiSbcywB\n\
2bFuoHYzQPk6vUZyZ4eD9tTIndvlFC+oqVPkgiaQ2DIkmUp9sVHPpGdy8okc3mue\n\
ScYwmYT1c6beJlnSMkb1F5Fmb6VmDDsE/fb5fSCaTrDQ6xDX69tNCSzSTab2Oe7U\n\
qpD501Zu6an1MIMFOCHcOUZxfWNKM00JC2conj91abeRmZzJQwuhlEsO1lfvhPkd\n\
eRM2Oo09AQmSDjzlMeYATyl95RsqXLCOJ2UlmwIDAQABAoIBABEIqqBTK/7pl/6A\n\
ceVAiuwC9X77p1GehITUk4ZyMjuy+GJNzxBR50gahsQ2/E+wQfAQ02NmhnBX/IGv\n\
Cw8df/euxLKUzy+yB5vujI6CoLpUL0rpzrWzYMCtWxT+NHH44C3WVaFOmfTglDic\n\
yPpmbtaUFNyTQg4u8lDJvAHARwwHUT0cjQMbGnAlwhgUk8vmyBJKA2n9KxiESDO0\n\
a5dar7r7bJLrA1ONm6L7cY7LMSlNVGoKSz/OKm0vP22558lO6rNhawo0aX0joemv\n\
/3gOGWmZwQa6vuq/ayr0/2KaLsQ6vtxrrd9OTsqlduJPjyI4nTGYuJZTbP9myVtf\n\
/sl2EOECgYEA+sHqdV9PF9cfBBZXYzPSL2ks995N3zGnvprpJpfwZPoGnLh0GJdP\n\
GKPnTHs083XKXEBPo6PKxT8MghghgGekQ7hrfBoLKGNRfBoqe8/nrRoa/XSsO23T\n\
PIP5L9nWvJh7KtO81rV4e6hjs9PXs7STfdk8sw2106K+a03rU2BdWVkCgYEA0IE1\n\
p/LL467/1M1+4g46o/P/lo+xoiPi1K+UyDWV2ChIANlq+0ZReZAfQJ0bj5NFtmL3\n\
pjPzV+xakdHAZmV0ELrQBXeWiNGEOHIILR/itDNYJSFcYK+QsjJfPNLULNkYqoD4\n\
WhuNVFUT04+fBSPQNeD0gpk4T1xRqGHK15s/JBMCgYEA3AWKU7JtE94NuOhhhQnT\n\
QwZmDpdgfJZ1OSlzqglnRTKc2qZ+N5WMMXKfYNw6eeTAynEjb9In+Sp5Ly09OA24\n\
dDM9HIc9gxKiTOIopLqn7ZsaU4osFXkn/9FMtE/Pu2uPpuRirYJNVTNLSF54xZWM\n\
VMBoIjPFdw01R7H26hGD1wECgYEAmi5RzQWfe5gWmffzUZoQBtkRMPbE9g7vVzMX\n\
JA1r5tGynN4pW/IdoXTPh2olzT+sFziLxJ053tRqDNY8Hfv7nbtmxAQwjq/PxCWe\n\
oi+n5nTpQ1uuAdkReJQDFOkZ+Kf4s2x3ObqSAcB/zruvbY+UEaNta319xEGSKJ9X\n\
7aNhR30CgYEA4ZEVuZTR4gg9EoPpkifrqFnYYaIyxtqAee0cXmNdV9IMcyXRsN3T\n\
fodXR8cKoZp3LO/+q5lBMfd8MAelUQtUZylsXpj/QD8t3TS1uLVXTwnHaMNsoLPP\n\
f0bfRqYQJltHiHF8cwOa+4CpSezwWuidi2JOCrvR5yTLHSa0R33+a/U=\n\
-----END RSA PRIVATE KEY-----\n"};


#ifdef __cplusplus
}
#endif
