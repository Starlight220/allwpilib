// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#pragma once

#include "frc/GenericHID.h"

namespace frc {

/**
 * Handle input from PS4 controllers connected to the Driver Station.
 *
 * <p>This class handles PS4 input that comes from the Driver Station. Each time
 * a value is requested the most recent value is returned. There is a single
 * class instance for each controller and the mapping of ports to hardware
 * buttons depends on the code in the Driver Station.
 */
class PS4Controller : public GenericHID {
 public:
  /**
   * Construct an instance of an PS4 controller.
   *
   * The controller index is the USB port on the Driver Station.
   *
   * @param port The port on the Driver Station that the controller is plugged
   *             into (0-5).
   */
  explicit PS4Controller(int port);

  ~PS4Controller() override = default;

  PS4Controller(PS4Controller&&) = default;
  PS4Controller& operator=(PS4Controller&&) = default;

  /**
   * Get the left X axis value of the controller.
   */
  double GetLeftX() const;

  /**
   * Get the right X axis value of the controller.
   */
  double GetRightX() const;

  /**
   * Get the left Y axis value of the controller.
   */
  double GetLeftY() const;

  /**
   * Get the right Y axis value of the controller.
   */
  double GetRightY() const;

  /**
   * Get the L2 axis axis value of the controller.
   */
  double GetL2Axis() const;

  /**
   * Get the R2 axis value of the controller.
   */
  double GetR2Axis() const;

  /**
   * Read the value of the Square button on the controller.
   *
   * @return The state of the button.
   */
  bool GetSquareButton() const;

  /**
   * Whether the Square button was pressed since the last check.
   *
   * @return Whether the button was pressed since the last check.
   */
  bool GetSquareButtonPressed();

  /**
   * Whether the Square button was released since the last check.
   *
   * @return Whether the button was released since the last check.
   */
  bool GetSquareButtonReleased();

  /**
   * Read the value of the Cross button on the controller.
   *
   * @return The state of the button.
   */
  bool GetCrossButton() const;

  /**
   * Whether the Cross button was pressed since the last check.
   *
   * @return Whether the button was pressed since the last check.
   */
  bool GetCrossButtonPressed();

  /**
   * Whether the Cross button was released since the last check.
   *
   * @return Whether the button was released since the last check.
   */
  bool GetCrossButtonReleased();

  /**
   * Read the value of the Circle button on the controller.
   *
   * @return The state of the button.
   */
  bool GetCircleButton() const;

  /**
   * Whether the Circle button was pressed since the last check.
   *
   * @return Whether the button was pressed since the last check.
   */
  bool GetCircleButtonPressed();

  /**
   * Whether the Circle button was released since the last check.
   *
   * @return Whether the button was released since the last check.
   */
  bool GetCircleButtonReleased();

  /**
   * Read the value of the Triangle button on the controller.
   *
   * @return The state of the button.
   */
  bool GetTriangleButton() const;

  /**
   * Whether the Triangle button was pressed since the last check.
   *
   * @return Whether the button was pressed since the last check.
   */
  bool GetTriangleButtonPressed();

  /**
   * Whether the Triangle button was released since the last check.
   *
   * @return Whether the button was released since the last check.
   */
  bool GetTriangleButtonReleased();

  /**
   * Read the value of the L1 button on the controller.
   *
   * @return The state of the button.
   */
  bool GetL1Button() const;

  /**
   * Whether the L1 button was pressed since the last check.
   *
   * @return Whether the button was pressed since the last check.
   */
  bool GetL1ButtonPressed();

  /**
   * Whether the L1 button was released since the last check.
   *
   * @return Whether the button was released since the last check.
   */
  bool GetL1ButtonReleased();

  /**
   * Read the value of the R1 button on the controller.
   *
   * @return The state of the button.
   */
  bool GetR1Button() const;

  /**
   * Whether the R1 button was pressed since the last check.
   *
   * @return Whether the button was pressed since the last check.
   */
  bool GetR1ButtonPressed();

  /**
   * Whether the R1 button was released since the last check.
   *
   * @return Whether the button was released since the last check.
   */
  bool GetR1ButtonReleased();

  /**
   * Read the value of the L2 button on the controller.
   *
   * @return The state of the button.
   */
  bool GetL2Button() const;

  /**
   * Whether the L2 button was pressed since the last check.
   *
   * @return Whether the button was pressed since the last check.
   */
  bool GetL2ButtonPressed();

  /**
   * Whether the L2 button was released since the last check.
   *
   * @return Whether the button was released since the last check.
   */
  bool GetL2ButtonReleased();

  /**
   * Read the value of the R2 button on the controller.
   *
   * @return The state of the button.
   */
  bool GetR2Button() const;

  /**
   * Whether the R2 button was pressed since the last check.
   *
   * @return Whether the button was pressed since the last check.
   */
  bool GetR2ButtonPressed();

  /**
   * Whether the R2 button was released since the last check.
   *
   * @return Whether the button was released since the last check.
   */
  bool GetR2ButtonReleased();

  /**
   * Read the value of the Share button on the controller.
   *
   * @return The state of the button.
   */
  bool GetShareButton() const;

  /**
   * Whether the Share button was pressed since the last check.
   *
   * @return Whether the button was pressed since the last check.
   */
  bool GetShareButtonPressed();

  /**
   * Whether the Share button was released since the last check.
   *
   * @return Whether the button was released since the last check.
   */
  bool GetShareButtonReleased();

  /**
   * Read the value of the Options button on the controller.
   *
   * @return The state of the button.
   */
  bool GetOptionsButton() const;

  /**
   * Whether the Options button was pressed since the last check.
   *
   * @return Whether the button was pressed since the last check.
   */
  bool GetOptionsButtonPressed();

  /**
   * Whether the Options button was released since the last check.
   *
   * @return Whether the button was released since the last check.
   */
  bool GetOptionsButtonReleased();

  /**
   * Read the value of the LeftStick button on the controller.
   *
   * @return The state of the button.
   */
  bool GetLeftStickButton() const;

  /**
   * Whether the LeftStick button was pressed since the last check.
   *
   * @return Whether the button was pressed since the last check.
   */
  bool GetLeftStickButtonPressed();

  /**
   * Whether the LeftStick button was released since the last check.
   *
   * @return Whether the button was released since the last check.
   */
  bool GetLeftStickButtonReleased();

  /**
   * Read the value of the RightStick button on the controller.
   *
   * @return The state of the button.
   */
  bool GetRightStickButton() const;

  /**
   * Whether the RightStick button was pressed since the last check.
   *
   * @return Whether the button was pressed since the last check.
   */
  bool GetRightStickButtonPressed();

  /**
   * Whether the RightStick button was released since the last check.
   *
   * @return Whether the button was released since the last check.
   */
  bool GetRightStickButtonReleased();

  /**
   * Read the value of the PS button on the controller.
   *
   * @return The state of the button.
   */
  bool GetPSButton() const;

  /**
   * Whether the PS button was pressed since the last check.
   *
   * @return Whether the button was pressed since the last check.
   */
  bool GetPSButtonPressed();

  /**
   * Whether the PS button was released since the last check.
   *
   * @return Whether the button was released since the last check.
   */
  bool GetPSButtonReleased();

  /**
   * Read the value of the screen button on the controller.
   *
   * @return The state of the button.
   */
  bool GetScreen() const;

  /**
   * Whether the screen was pressed since the last check.
   *
   * @return Whether the screen was pressed since the last check.
   */
  bool GetScreenPressed();

  /**
   * Whether the screen was released since the last check.
   *
   * @return Whether the screen was released since the last check.
   */
  bool GetScreenReleased();

  struct Button {
    static constexpr int kSquare = 1;
    static constexpr int kCross = 2;
    static constexpr int kCircle = 3;
    static constexpr int kTriangle = 4;
    static constexpr int kL1 = 5;
    static constexpr int kR1 = 6;
    static constexpr int kL2 = 7;
    static constexpr int kR2 = 8;
    static constexpr int kShare = 9;
    static constexpr int kOptions = 10;
    static constexpr int kLeftStick = 11;
    static constexpr int kRightStick = 12;
    static constexpr int kPS = 13;
    static constexpr int kScreen = 14;
  };

  struct Axis {
    static constexpr int kLeftX = 0;
    static constexpr int kLeftY = 1;
    static constexpr int kRightX = 2;
    static constexpr int kRightY = 5;
    static constexpr int kL2 = 3;
    static constexpr int kR2 = 4;
  };
};

}  // namespace frc
