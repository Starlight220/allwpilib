// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#include "frc/Encoder.h"

#include <utility>

#include <hal/Encoder.h>
#include <hal/FRCUsageReporting.h>
#include <wpi/NullDeleter.h>
#include <wpi/sendable/SendableBuilder.h>
#include <wpi/sendable/SendableRegistry.h>

#include "frc/DigitalInput.h"
#include "frc/Errors.h"

using namespace frc;

Encoder::Encoder(int aChannel, int bChannel, bool reverseDirection, EncodingType encodingType)
         : QuadratureEncoder(aChannel, bChannel, reverseDirection, encodingType) {}

Encoder::Encoder(DigitalSource* aSource, DigitalSource* bSource,
                 bool reverseDirection, EncodingType encodingType)
    : QuadratureEncoder(aSource, bSource, reverseDirection, encodingType) {}

Encoder::Encoder(DigitalSource& aSource, DigitalSource& bSource,
                 bool reverseDirection, EncodingType encodingType)
    : QuadratureEncoder(aSource, bSource, reverseDirection, encodingType) {}

Encoder::Encoder(std::shared_ptr<DigitalSource> aSource,
                 std::shared_ptr<DigitalSource> bSource, bool reverseDirection,
                 EncodingType encodingType)
    : QuadratureEncoder(aSource, bSource, reverseDirection, encodingType) {}

Encoder::~Encoder() {}
