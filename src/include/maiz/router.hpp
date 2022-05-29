#include <maiz/_/defs.hpp>
#include <maiz/server.hpp>
namespace Maiz {
    class MAIZ_PUBLIC Router {
    private:
        std::vector<Route> routes;
    public:
        Router();
        ~Router();
        void use(const std::string &path, const RequestHandler handler, const Method method = Any);
        void get(const std::string &path, const RequestHandler handler);
        void head(const std::string &path, const RequestHandler handler);
        void post(const std::string &path, const RequestHandler handler);
        void put(const std::string &path, const RequestHandler handler);
        void delete_(const std::string &path, const RequestHandler handler);
        void connect(const std::string &path, const RequestHandler handler);
        void options(const std::string &path, const RequestHandler handler);
        void trace(const std::string &path, const RequestHandler handler);
        void patch(const std::string &path, const RequestHandler handler);
        bool handle(Request &req, Response &res);
    };
}