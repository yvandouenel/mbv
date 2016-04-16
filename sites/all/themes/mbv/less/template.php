<?php

/**
 * @file
 * template.php
 */

/**
 * Supprime les attributs width et height des images
 * @param $variables
 */
function mbv_preprocess_image(&$variables) {
    foreach (array('width', 'height') as $key) {
        unset($variables[$key]);
        unset($variables[$key]);
    }
}