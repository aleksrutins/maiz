#include <maiz/router.hpp>
namespace Maiz {
    Router::Router()
        : routes()
    {

    }

    Router::~Router()
    {

    }

    void Router::use(const std::string &path, const RequestHandler callback, const Method method)
    {
        routes.push_back({std::regex(path), method, callback});
    }

    void Router::get(const std::string &path, const RequestHandler callback)
    {
        use(path, callback, GET);
    }

    void Router::post(const std::string &path, const RequestHandler callback)
    {
        use(path, callback, POST);
    }

    void Router::head(const std::string &path, const RequestHandler callback)
    {
        use(path, callback, HEAD);
    }

    void Router::put(const std::string &path, const RequestHandler callback)
    {
        use(path, callback, PUT);
    }

    void Router::delete_(const std::string &path, const RequestHandler callback)
    {
        use(path, callback, DELETE);
    }

    void Router::connect(const std::string &path, const RequestHandler callback)
    {
        use(path, callback, CONNECT);
    }

    void Router::options(const std::string &path, const RequestHandler callback)
    {
        use(path, callback, OPTIONS);
    }

    void Router::trace(const std::string &path, const RequestHandler callback)
    {
        use(path, callback, TRACE);
    }

    void Router::patch(const std::string &path, const RequestHandler callback)
    {
        use(path, callback, PATCH);
    }
}