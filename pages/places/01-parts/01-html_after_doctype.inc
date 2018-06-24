<?php
require_once 'asset/lib/php/mobile-detect/Mobile_Detect.php';
$detect = new Mobile_Detect;

// Exclude tablets.
//if ($detect->isMobile() && !$detect->isTablet()) {
if ($detect->isMobile() && !$detect->isTablet()) {
    $size = "sm";
} else {
    $size = "lg";
}
?>
