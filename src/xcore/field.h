#pragma once
#include "catch2/catch.hpp"
#include "system.h"
class IComponent {
public:
    IComponent() = default;
    virtual ~IComponent() = default;

    virtual bool initialize_field(System &system) = 0;
    virtual bool initialize_sequence() = 0;
    virtual bool initialize_reference() = 0;
    virtual bool shutdown() = 0;
};

class field {
public:
    template <class T>
    T &get_data() {
        return *reinterpret_cast<T *>(data);
    }

    uint32_t operator =(uint32_t value) {
        get_data<uint32_t>() = value;
        return value;
    }

protected:
    void *data = nullptr;
};

class field_i : public field {
public:
    field_i(uint32_t value) { data = new uint32_t(value); }

    ~field_i() { delete reinterpret_cast<uint32_t *>(data); }
};

class field_f : public field {
public:
};

class field_d : public field {
public:
};

class field_s : public field {
public:
};

