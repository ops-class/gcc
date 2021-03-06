/* gnu.java.beans.DummyAppletStub
   Copyright (C) 2004, 2005 Free Software Foundation, Inc.

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


package gnu.java.beans;

import java.applet.AppletContext;
import java.applet.AppletStub;
import java.net.URL;

/** Placeholder implementation of <code>AppletStub</code> providing no functionality.
 * <p>This class is used for <code>Applet</code> being created with
 * {@link java.beans.Bean.instantiate}.</p>
 *
 * @author Robert Schuster
 */
public class DummyAppletStub implements AppletStub
{
  private URL documentBase;
  private URL codeBase;
  private DummyAppletContext context;

  public DummyAppletStub(URL newCodeBase, URL newDocumentBase)
  {
    codeBase = newCodeBase;
    documentBase = newDocumentBase;

    context = new DummyAppletContext();
  }

  /** Returns always <code>true</code>.
   *
   * @see java.applet.AppletStub#isActive()
   */
  public boolean isActive()
  {
    return true;
  }

  /**
   * @see java.applet.AppletStub#getDocumentBase()
   */
  public URL getDocumentBase()
  {
    return documentBase;
  }

  /**
   * @see java.applet.AppletStub#getCodeBase()
   */
  public URL getCodeBase()
  {
    return codeBase;
  }

  /** Implementation returns <code>null</code> for every parameter name.
   *
   * @see java.applet.AppletStub#getParameter(java.lang.String)
   */
  public String getParameter(String name)
  {
    return null;
  }

  /** Returns a non-functional context instance.
   *
   * @see java.applet.AppletStub#getAppletContext()
   */
  public AppletContext getAppletContext()
  {
    return context;
  }

  /** Does nothing.
   *
   * @see java.applet.AppletStub#appletResize(int, int)
   */
  public void appletResize(int width, int height)
  {
  }
}
