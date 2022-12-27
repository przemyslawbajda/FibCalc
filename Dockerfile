FROM alpine:3 as build-env
RUN apk add --no-cache build-base
WORKDIR /app
COPY . .
RUN gcc -o FibCalc FibCalc.c

FROM alpine:3
COPY --from=build-env /app/FibCalc /app/FibCalc
WORKDIR /app
CMD ["/app/FibCalc"] 