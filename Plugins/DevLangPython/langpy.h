///
/// @project       TreeATE
/// @brief         parser test for Python
/// @author        David Yin  2019-01 willage.yin@163.com
///
/// @license       GNU GPL v3
///
/// Distributed under the GNU GPL v3 License
/// (See accompanying file LICENSE or copy at
/// http://www.gnu.org/licenses/gpl.html)
///
#ifndef LANGPY_H
#define LANGPY_H

#include "imutlilang.h"
#include "pythonqt.h"

class LangPy : public IMutliLang
{
    Q_OBJECT
public:
    LangPy();
    virtual ~LangPy();

    virtual bool loadScript(const QStringList& scriptFiles);
    virtual void addModel(const QString &strObjName, QObject* obj);
    virtual bool initPublicPara(const TA_MapParaValue& publicPara);
    virtual int executeScript(const QString& funcName, const TA_MapParaValue& localValue);

protected slots:
    void strOut(const QString& out);
private:
    PythonQtObjectPtr m_mainModule;
};

#endif // LANGPY_H