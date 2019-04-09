// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "config.h"
#include "V8UIEventInit.h"

#include "bindings/core/v8/ExceptionState.h"
#include "bindings/core/v8/V8EventInit.h"
#include "bindings/core/v8/V8InputDevice.h"
#include "bindings/core/v8/V8Window.h"

namespace blink {

void V8UIEventInit::toImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, UIEventInit& impl, ExceptionState& exceptionState)
{
    if (isUndefinedOrNull(v8Value))
        return;
    if (!v8Value->IsObject()) {
        exceptionState.throwTypeError("cannot convert to dictionary.");
        return;
    }

    V8EventInit::toImpl(isolate, v8Value, impl, exceptionState);
    if (exceptionState.hadException())
        return;

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
        v8::Local<v8::Value> detailValue;
        if (!v8Object->Get(isolate->GetCurrentContext(), v8String(isolate, "detail")).ToLocal(&detailValue)) {
            exceptionState.rethrowV8Exception(block.Exception());
            return;
        }
        if (detailValue.IsEmpty() || detailValue->IsUndefined()) {
            // Do nothing.
        } else {
            int detail = toInt32(isolate, detailValue, NormalConversion, exceptionState);
            if (exceptionState.hadException())
                return;
            impl.setDetail(detail);
        }
    }

    {
        v8::Local<v8::Value> sourceDeviceValue;
        if (!v8Object->Get(isolate->GetCurrentContext(), v8String(isolate, "sourceDevice")).ToLocal(&sourceDeviceValue)) {
            exceptionState.rethrowV8Exception(block.Exception());
            return;
        }
        if (sourceDeviceValue.IsEmpty() || sourceDeviceValue->IsUndefined()) {
            // Do nothing.
        } else if (sourceDeviceValue->IsNull()) {
            impl.setSourceDeviceToNull();
        } else {
            InputDevice* sourceDevice = V8InputDevice::toImplWithTypeCheck(isolate, sourceDeviceValue);
            if (!sourceDevice && !sourceDeviceValue->IsNull()) {
                exceptionState.throwTypeError("member sourceDevice is not of type InputDevice.");
                return;
            }
            impl.setSourceDevice(sourceDevice);
        }
    }

    {
        v8::Local<v8::Value> viewValue;
        if (!v8Object->Get(isolate->GetCurrentContext(), v8String(isolate, "view")).ToLocal(&viewValue)) {
            exceptionState.rethrowV8Exception(block.Exception());
            return;
        }
        if (viewValue.IsEmpty() || viewValue->IsUndefined()) {
            // Do nothing.
        } else if (viewValue->IsNull()) {
            impl.setViewToNull();
        } else {
            DOMWindow* view = toDOMWindow(isolate, viewValue);
            if (!view && !viewValue->IsNull()) {
                exceptionState.throwTypeError("member view is not of type Window.");
                return;
            }
            impl.setView(view);
        }
    }

}

v8::Local<v8::Value> toV8(const UIEventInit& impl, v8::Local<v8::Object> creationContext, v8::Isolate* isolate)
{
    v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
    if (!toV8EventInit(impl, v8Object, creationContext, isolate))
        return v8::Local<v8::Value>();
    if (!toV8UIEventInit(impl, v8Object, creationContext, isolate))
        return v8::Local<v8::Value>();
    return v8Object;
}

bool toV8UIEventInit(const UIEventInit& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate)
{
    if (impl.hasDetail()) {
        if (!v8CallBoolean(dictionary->CreateDataProperty(isolate->GetCurrentContext(), v8String(isolate, "detail"), v8::Integer::New(isolate, impl.detail()))))
            return false;
    } else {
        if (!v8CallBoolean(dictionary->CreateDataProperty(isolate->GetCurrentContext(), v8String(isolate, "detail"), v8::Integer::New(isolate, 0))))
            return false;
    }

    if (impl.hasSourceDevice()) {
        if (!v8CallBoolean(dictionary->CreateDataProperty(isolate->GetCurrentContext(), v8String(isolate, "sourceDevice"), toV8(impl.sourceDevice(), creationContext, isolate))))
            return false;
    } else {
        if (!v8CallBoolean(dictionary->CreateDataProperty(isolate->GetCurrentContext(), v8String(isolate, "sourceDevice"), v8::Null(isolate))))
            return false;
    }

    if (impl.hasView()) {
        if (!v8CallBoolean(dictionary->CreateDataProperty(isolate->GetCurrentContext(), v8String(isolate, "view"), toV8(impl.view(), creationContext, isolate))))
            return false;
    } else {
        if (!v8CallBoolean(dictionary->CreateDataProperty(isolate->GetCurrentContext(), v8String(isolate, "view"), v8::Null(isolate))))
            return false;
    }

    return true;
}

UIEventInit NativeValueTraits<UIEventInit>::nativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState)
{
    UIEventInit impl;
    V8UIEventInit::toImpl(isolate, value, impl, exceptionState);
    return impl;
}

} // namespace blink
