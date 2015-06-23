/* LocaleInformation_mi_NZ.java
   Copyright (C) 2002 Free Software Foundation, Inc.

This file is part of GNU Classpath.

GNU Classpath is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 2, or (at your option)
any later version.

GNU Classpath is distributed in the hope that it will be useful, but
WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
General Public License for more details.

You should have received a copy of the GNU General Public License
along with GNU Classpath; see the file COPYING.  If not, write to the
Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA
02110-1301 USA.

Linking this library statically or dynamically with other modules is
making a combined work based on this library.  Thus, the terms and
conditions of the GNU General Public License cover the whole
combination.

As a special exception, the copyright holders of this library give you
permission to link this library with independent modules to produce an
executable, regardless of the license terms of these independent
modules, and to copy and distribute the resulting executable under
terms of your choice, provided that you also meet, for each linked
independent module, the terms and conditions of the license of that
module.  An independent module is a module which is not derived from
or based on this library.  If you modify this library, you may extend
this exception to your version of the library, but you are not
obligated to do so.  If you do not wish to do so, delete this
exception statement from your version. */


// This file was automatically generated by localedef.

package gnu.java.locale;

import java.util.ListResourceBundle;

public class LocaleInformation_mi_NZ extends ListResourceBundle
{
  static final String decimalSeparator = LocaleInformation_en_NZ.decimalSeparator;
  static final String groupingSeparator = LocaleInformation_en_NZ.groupingSeparator;
  static final String numberFormat = LocaleInformation_en_NZ.numberFormat;
  static final String percentFormat = LocaleInformation_en_NZ.percentFormat;
  static final String[] weekdays = { null, "R\u0101tapu", "Mane", "T\u016Brei", "Wenerei", "T\u0101ite", "Paraire", "H\u0101tarei" };

  static final String[] shortWeekdays = { null, "Ta", "Ma", "T\u016B", "We", "T\u0101i", "Pa", "H\u0101" };

  static final String[] shortMonths = { "Kohi", "Hui", "Pou", "Pae", "Hara", "Pipi", "H\u014Dngoi", "Here", "Mahu", "Whi-nu", "Whi-ra", "Haki", null };

  static final String[] months = { "Kohi-t\u0101tea", "Hui-tanguru", "Pout\u016B-te-rangi", "Paenga-wh\u0101wh\u0101", "Haratua", "Pipiri", "H\u014Dngoingoi", "Here-turi-k\u014Dk\u0101", "Mahuru", "Whiringa-\u0101-nuku", "Whiringa-\u0101-rangi", "Hakihea", null };

  static final String[] ampms = { "", "" };

  static final String shortDateFormat = "dd/MM/yy";
  static final String defaultTimeFormat = "";
  static final String currencySymbol = LocaleInformation_en_NZ.currencySymbol;
  static final String intlCurrencySymbol = LocaleInformation_en_NZ.intlCurrencySymbol;
  static final String currencyFormat = LocaleInformation_en_NZ.currencyFormat;

  private static final Object[][] contents =
  {
    { "weekdays", weekdays },
    { "shortWeekdays", shortWeekdays },
    { "shortMonths", shortMonths },
    { "months", months },
    { "ampms", ampms },
    { "shortDateFormat", shortDateFormat },
    { "defaultTimeFormat", defaultTimeFormat },
    { "currencySymbol", currencySymbol },
    { "intlCurrencySymbol", intlCurrencySymbol },
    { "currencyFormat", currencyFormat },
    { "decimalSeparator", decimalSeparator },
    { "groupingSeparator", groupingSeparator },
    { "numberFormat", numberFormat },
    { "percentFormat", percentFormat },
  };

  public Object[][] getContents () { return contents; }
}
