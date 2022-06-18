# DesignPatternByCpp

====

* 通过cpp实现设计模式
* 学习要点
  * 设计原则

## 1.创建类

### 01.Simaple Factory 简单工厂

### 02.Factory Method 工厂方法

* 定义：
定义一个用于创建对象的接口，让子类决定实例化哪一个类。Factory Method使得一个类的实例化延迟到子类。 ——《设计模式》GoF

### 03.Abstract Factory 抽象工厂

* 定义：
提供一个接口，让该接口负责创建一系列“相关或者相互依赖的对象”，无需指定它们具体的类。——《设计模式》GoF

### 04.Bulider 生成器

### 05.Prototype 原型

### 06.Singleton 单例

* 定义：
保证一个类仅有一个实例，并提供一个该实例的全局访问点。 ——《设计模式》GoF

## 2.结构类

### 07.Adapter 适配器

### 08.Bridge

### 09.Composite 组成

### 10.Decorator 装饰模式

* 定义：
动态地给一个对象增加一些额外的职责。就增加功能而言，装饰器模式比生产子类更为灵活。—— 《设计模式》GoF

### 11.Facade外观 

### 12.Flyweight 享元

### 13.Proxy 代理

## 3.行为类

### 14.Chain Of Responsibility 职责链

* 定义：
使多个对象都有机会处理请求，从而避免请求的发送者和接收者之间的耦合关系。将这些对象连成一条链，并沿着这条链传递请求，直到有一个对象处理它为止。 ——《设计模式》GoF

### 15.Command 命令

### 16.interpreter 解释器

### 17.iterator 迭代器

### 18.mediator 中介者

### 19.memento 备忘录

### 20.Observer 观察者模式

* 定义：
定义对象间的一种一对多（变化）的依赖关系，以便当一个对象(Subject)的状态发生改变时，所有依赖于它的对象都得到通知并自动更新。 ——《设计模式》 GoF

### 21.Strategy 策略

*定义：
定义一系列算法，把它们一个个封装起来，并且使它们可互相替换。该模式使得算法可独立于使用它的客户程序而变化。 ——《设计模式》 GoF

### 22.State 状态

### 23.TemplateMethodPattern 模板方法

* 定义：
定义一个操作中的算法的骨架（稳定），而将一些步骤延迟（变化）到子类中
* 不要调用我，让我来调用你

### 24.Visitor 访问模式
