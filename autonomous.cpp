/**
 * Runs the user autonomous code. This function will be started in its own task
 * with the default priority and stack size whenever the robot is enabled via
 * the Field Management System or the VEX Competition Switch in the autonomous
 * mode. Alternatively, this function may be called in initialize or opcontrol
 * for non-competition testing purposes.
 *
 * If the robot is disabled or communications is lost, the autonomous task
 * will be stopped. Re-enabling the robot will restart the task, not re-start it
 * from where it left off.
 */
void autonomous() {
    // Set starting position
    chassis.setPose(0, 0, 0); // x (in), y (in), heading (deg)

    // Drive forward 24 inches
    chassis.moveToPoint(0, 24, 2000); // x, y, timeout (ms)

    // Turn 90 degrees clockwise
    chassis.turnToHeading(90, 1500);

    // Drive forward another 24 inches
    chassis.moveToPoint(24, 24, 2000);

    // Stop drivetrain
    leftmotors.brake();
    rightmotors.brake();
}
