/*----------------------------------------------------------------------------*/
/* Copyright (c) 2011-2019 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#pragma once

#include "frc/buttons/ButtonScheduler.h"

namespace frc {

class Trigger;
class Command;

class ReleasedButtonScheduler : public ButtonScheduler {
 public:
  ReleasedButtonScheduler(bool last, Trigger* button, Command* orders);
  virtual ~ReleasedButtonScheduler() = default;

  ReleasedButtonScheduler(ReleasedButtonScheduler&&) = default;
  ReleasedButtonScheduler& operator=(ReleasedButtonScheduler&&) = default;

  virtual void Execute();
};

}  // namespace frc
