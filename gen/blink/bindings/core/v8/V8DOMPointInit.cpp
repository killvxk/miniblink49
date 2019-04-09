// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "config.h"
#include "V8DOMPointInit.h"

#include "bindings/core/v8/ExceptionState.h"

namespace blink {

void V8DOMPointInit::toImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, DOMPointInit& impl, ExceptionState& exceptionState)
{
    if (isUndefinedOrNull(v8Value))
        return;
    if (!v8Value->IsObject()) {
        exceptionState.throwTypeError("cannot convert to dictionary.");
        return;
    }

#if V8_MAJOR_VERSION > 5
    v8::TryCatch block(isolate);
#else
    v8::TryCatch block;
#endif
    v8::Local<v8::Object> v8Object;
    if (!v8Call(v8Value->ToObject(isolate->GetCurrentContext()), v8Object, block)) {
        exceptionState.rethrowV8Exception(block.Exception());
        return;
    }
    {
        v8::Local<v8::Value> wValue;
        if (!v8Object->Get(isolate->GetCurrentContext(), v8String(isolate, "w")).ToLocal(&wValue)) {
            exceptionState.rethrowV8Exception(block.Exception());
            return;
        }
        if (wValue.IsEmpty() || wValue->IsUndefined()) {
            // Do nothing.
        } else {
            double w = toDouble(isolate, wValue, exceptionState);
            if (exceptionState.hadException())
                return;
            impl.setW(w);
        }
    }

    {
        v8::Local<v8::Value> xValue;
        if (!v8Object->Get(isolate->GetCurrentContext(), v8String(isolate, "x")).ToLocal(&xValue)) {
            exceptionState.rethrowV8Exception(block.Exception());
            return;
        }
        if (xValue.IsEmpty() || xValue->IsUndefined()) {
            // Do nothing.
        } else {
            double x = toDouble(isolate, xValue, exceptionState);
            if (exceptionState.hadException())
                return;
            impl.setX(x);
        }
    }

    {
        v8::Local<v8::Value> yValue;
        if (!v8Object->Get(isolate->GetCurrentContext(), v8String(isolate, "y")).ToLocal(&yValue)) {
            exceptionState.rethrowV8Exception(block.Exception());
            return;
        }
        if (yValue.IsEmpty() || yValue->IsUndefined()) {
            // Do nothing.
        } else {
            double y = toDouble(isolate, yValue, exceptionState);
            if (exceptionState.hadException())
                return;
            impl.setY(y);
        }
    }

    {
        v8::Local<v8::Value> zValue;
        if (!v8Object->Get(isolate->GetCurrentContext(), v8String(isolate, "z")).ToLocal(&zValue)) {
            exceptionState.rethrowV8Exception(block.Exception());
            return;
        }
        if (zValue.IsEmpty() || zValue->IsUndefined()) {
            // Do nothing.
        } else {
            double z = toDouble(isolate, zValue, exceptionState);
            if (exceptionState.hadException())
                return;
            impl.setZ(z);
        }
    }

}

v8::Local<v8::Value> toV8(const DOMPointInit& impl, v8::Local<v8::Object> creationContext, v8::Isolate* isolate)
{
    v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
    if (!toV8DOMPointInit(impl, v8Object, creationContext, isolate))
        return v8::Local<v8::Value>();
    return v8Object;
}

bool toV8DOMPointInit(const DOMPointInit& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate)
{
    if (impl.hasW()) {
        if (!v8CallBoolean(dictionary->CreateDataProperty(isolate->GetCurrentContext(), v8String(isolate, "w"), v8::Number::New(isolate, impl.w()))))
            return false;
    } else {
        if (!v8CallBoolean(dictionary->CreateDataProperty(isolate->GetCurrentContext(), v8String(isolate, "w"), v8::Number::New(isolate, 1))))
            return false;
    }

    if (impl.hasX()) {
        if (!v8CallBoolean(dictionary->CreateDataProperty(isolate->GetCurrentContext(), v8String(isolate, "x"), v8::Number::New(isolate, impl.x()))))
            return false;
    } else {
        if (!v8CallBoolean(dictionary->CreateDataProperty(isolate->GetCurrentContext(), v8String(isolate, "x"), v8::Number::New(isolate, 0))))
            return false;
    }

    if (impl.hasY()) {
        if (!v8CallBoolean(dictionary->CreateDataProperty(isolate->GetCurrentContext(), v8String(isolate, "y"), v8::Number::New(isolate, impl.y()))))
            return false;
    } else {
        if (!v8CallBoolean(dictionary->CreateDataProperty(isolate->GetCurrentContext(), v8String(isolate, "y"), v8::Number::New(isolate, 0))))
            return false;
    }

    if (impl.hasZ()) {
        if (!v8CallBoolean(dictionary->CreateDataProperty(isolate->GetCurrentContext(), v8String(isolate, "z"), v8::Number::New(isolate, impl.z()))))
            return false;
    } else {
        if (!v8CallBoolean(dictionary->CreateDataProperty(isolate->GetCurrentContext(), v8String(isolate, "z"), v8::Number::New(isolate, 0))))
            return false;
    }

    return true;
}

DOMPointInit NativeValueTraits<DOMPointInit>::nativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState)
{
    DOMPointInit impl;
    V8DOMPointInit::toImpl(isolate, value, impl, exceptionState);
    return impl;
}

} // namespace blink
