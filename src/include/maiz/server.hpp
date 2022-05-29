#pragma once
#include <vector>
#include <regex>
#include <maiz/_/defs.hpp>
#include <maiz/request.hpp>
#include <maiz/response.hpp>
#include <maiz/router.hpp>

namespace Maiz
{
    using RequestHandler = std::function<void(Request&, Response&)>;
    enum MAIZ_PUBLIC Method {
        GET, HEAD, POST, PUT, DELETE, CONNECT, OPTIONS, TRACE, PATCH, Any
    };
    struct MAIZ_PUBLIC Route
    {
        std::regex matcher;
        Method method;
        RequestHandler handler;
    };
    class MAIZ_PUBLIC Server : public Router
    {
    public:
        Server();
        ~Server();
    };
} // namespace Maiz
