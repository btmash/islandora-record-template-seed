#### BUILD STATUS

[![Build Status](https://travis-ci.org/btmash/islandora-record-template-seed.png?branch=7.x-1.x)](https://travis-ci.org/btmash/islandora-record-template-seed)

#### SUMMARY

This module allows you to use the MODS record of another fedora object as a
template or 'seed' in the creation/ingest process of a new Fedora Object.

#### REQUIREMENTS

The XML Forms Module (https://github.com/islandora/islandora_xml_forms)

#### INSTALLATION

Enable the module.

#### USAGE

If you go to a record with a valid MODS datastream (and MODS form), you will
get a menu task to 'Clone/Seed Template'. Click the link to get an ingest form
that is pre-filled with the mods data from the record you clicked from.

#### CONFIGURATION

You can configure which elements of the form/record do not get added to the 
seed process at /admin/islandora/islandora-record-template-seed.

#### FAQ

 Q: Why? This seems awfully similar to the template documents that can be used
    to prepopulate MODS forms on ingest.

 A: Sometimes, it is easier to use a record that may be just been entered as
    the foundation to prepopulate the MODS form (for example, say we have a
    collection of images that are similar in the photographer, location, etc
    but different in context like the notes, subject chains).
    
 Q: Why such a terrible module name?
 
 A: I am terrible at naming projects :(
 
 Q: Where are the tests?
 
 A: Another thing I am somewhat terrible at. It will be a work in progress.

#### SPONSOR

The Cherry Hill Company (http://chillco.com)
