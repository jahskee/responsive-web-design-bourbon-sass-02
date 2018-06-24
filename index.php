<?php

$page= $_GET['page'];

if($page=='hawaii') {
    include_once("pages/places/hawaii/hawaii.php");

} else if($page=='boracay') {
        include_once("pages/places/boracay/boracay.php");

} else if($page=='manila') {
    include_once("pages/places/manila/manila.php");

} else {
    include_once("pages/places/boracay/boracay.php");
}
?>