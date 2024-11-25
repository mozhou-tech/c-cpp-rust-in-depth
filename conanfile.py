from conan import ConanFile
from conan.tools.cmake import cmake_layout


class ExampleRecipe(ConanFile):
    settings = "os", "compiler", "build_type", "arch"
    generators = "CMakeDeps", "CMakeToolchain"

    def requirements(self):
        self.requires("paho-mqtt-cpp/1.4.1")
        self.requires("zlib/1.2.11")
        self.requires("openssl/3.3.2")
        self.requires("gtest/1.15.0")

    def layout(self):
        cmake_layout(self)